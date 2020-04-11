---
title: "Packaging Python Projects"
date: 2020-04-10
tags: [programming]
excerpt: In this blogpost I explain how to create and upload a package to Python Package Index.
---

## Packaging a simple project in Python

En este blogpost vamos a ver como crear un paquete de un proyecto simple en Python.

### Estructura de carpetas

Para crear este proyecto localmente se debe tener esta estructura de carpetas:

```
tutorial_paquete/
	ejemplo_pkg/
	  __init__.py
```



Una vez creada esta estructura de carpetas asegurate de estar en `tutorial_paquete.`

El archivo `ejemplo_pkg/__init__.py` es requerido para importar el directorio como un **paquete** y puede ser un archivo vacío.

### Creando los archivos esenciales

Vamos a crear algunos archivos útiles para el *packaging* de este proyecto y prepararlo para su distribución.

````
tutorial_paquete/
	ejemplo_pkg/
	  __init__.py
	test/
	setup.py
	LICENSE
	README.md
````



La carpeta `test/` será para almacenar los archivos de unidades de prueba o *unit test files*. Por ahora la dejamos vacía.

### Creando setup.py

Este archivo es el *script* de contrucción para [setuptools](<https://packaging.python.org/key_projects/#setuptools>). Este archivo se encarga de comunicar a setuptools información importante como el nombre y la version, así como que otros archivos incluir.

Abrimos el archivo `setup.py` y copiamos el siguiente contenido:

````python
import setuptools

with open("README.md", "r") as fh:
    long_description = fh.read()

setuptools.setup(
    name="example-pkg-YOUR-USERNAME-HERE", # Replace with your own username
    version="0.0.1",
    author="Example Author",
    author_email="author@example.com",
    description="A small example package",
    long_description=long_description,
    long_description_content_type="text/markdown",
    url="https://github.com/pypa/sampleproject",
    packages=setuptools.find_packages(),
    classifiers=[
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Operating System :: OS Independent",
    ],
    python_requires='>=3.6',
)
````

La función `setup()` toma  varios argumentos:

- `name` es el *nombre de distribución* de tu paquete. Puede contener letras, números, _ , y -. Por supuesto, el nombre no debe estar registrado ya en pypi.org.
- `version` es la versión del paquete. Refiera a [PEP 440](<https://www.python.org/dev/peps/pep-0440/>) para más información acerca de versiones.
- `author` y `author_mail` se explican por sí solos.
- `description` es un pequeño resumen de no más de una oración acerca del paquete.
- `long_description` es una descripción más detallada del paquete.
- `long_description_content_type` le dice al *Package Index* que *markup* usar, en este caso es **Markdown**.
- `url` es el URL de la página del proyecto.
- `packages` es una lista de los [import packages](<https://packaging.python.org/glossary/#term-import-package>) que deben ser incluidos en la distribucion del paquete.
- `classifiers` ofrece la oportunidad de agregar metadata a index y pip.

### Creando el README.md

Contiene información acerca del proyecto. Puedes usar cualquier lenguage de Markup como Markdown.

````markdown
# Example Package

This is a simple example package. You can use
[Github-flavored Markdown](https://guides.github.com/features/mastering-markdown/)
to write your content.
````

### Creando una LICENSE

Es muy importante que todo paquete posea una licencia para advertir bajo que términos una persona puede usar el paquete. Para ayuda sobre como elegir un paquete  redirijase a (<https://choosealicense.com/>). Por ejemplo, podemos usar la Licencia MIT:

````
Copyright (c) 2018 The Python Packaging Authority

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
````



### Generando los archivos de distribución

Estos archivos son los que se pueden subir a *Package Index* y ser instalados por pip.

Primero asegurate que tienes las últimas versiones de `setuptools` y `wheel` :



````
python3 -m pip install --user --upgrade setuptools wheel
````



Ahora, ejecuta este comando en la misma carpeta donde se localiza `setup.py` :



````
dist/
  example_pkg_YOUR_USERNAME_HERE-0.0.1-py3-none-any.whl
  example_pkg_YOUR_USERNAME_HERE-0.0.1.tar.gz
````

El archivo `tar.gz` es un [archivo fuente](<https://packaging.python.org/glossary/#term-source-archive>) mientras que el archivo `.whl` es un [Built Distribution](<https://packaging.python.org/glossary/#term-built-distribution>) . En este paso se debe recalcar que es necesario actualizar los *built* para distintas versiones.

### Subiendo los archivos de distribución

Ahora podemos subir los archivos al *Package Index*. Lo primero es registrar una cuenta en *Test PyPI* . *Test PyPI* es una instancia separada de *PyPI* destinada para pruebas y experimentación.

El siguiente paso es crear un PyPI [API token](<https://test.pypi.org/help/#apitoken>) para subir de manera segura el paquete.

Entrar a  (<https://test.pypi.org/manage/account/#api-tokens>) para crear un nuevo API token.

**Advertencia: No cierres la página hasta que hayas copiado y guardado el token, ya que no volverá a parecer nunca.**

Ahora que ya estás registrado, puedes usar [twine](<https://packaging.python.org/key_projects/#twine>) para subir el paquete. Primero, necesitarás instalar Twine:

````
python3 -m pip install --user --upgrade twine
````

Una vez instalado, ejecuta Twine para subir todos los archivos a `dist` :

````
python3 -m twine upload --repository-url https://test.pypi.org/legacy/ dist/*
````

Serás requerido de ingresar usuario y contraseña. Para el usuario utiliza `__token__` , y para la contraseña utiliza el valon del token, incluyendo el prefijo `pypi` .

Después de que se complete el comando, deberías ver algo como esto:

````
Uploading distributions to https://test.pypi.org/legacy/
Enter your username: [your username]
Enter your password:
Uploading example_pkg_YOUR_USERNAME_HERE-0.0.1-py3-none-any.whl
100%|█████████████████████| 4.65k/4.65k [00:01<00:00, 2.88kB/s]
Uploading example_pkg_YOUR_USERNAME_HERE-0.0.1.tar.gz
100%|█████████████████████| 4.25k/4.25k [00:01<00:00, 3.05kB/s]
````

Una vez subido, tu paquete debería estar disponible en Test PyPI.

### Instalando tu nuevo paquete

Podemos usar pip para instalar el paquete y verificar que funciona. Crea un nuevo [virtualenv](<https://packaging.python.org/key_projects/#virtualenv>) e instala tu paquete desde Test PyPI:

````
python3 -m pip install --index-url https://test.pypi.org/simple/ --no-deps example-pkg-YOUR-USERNAME-HERE
````

Pip debería instalar el paquete:

````
Collecting example-pkg-YOUR-USERNAME-HERE
  Downloading https://test-files.pythonhosted.org/packages/.../example-pkg-YOUR-USERNAME-HERE-0.0.1-py3-none-any.whl
Installing collected packages: example-pkg-YOUR-USERNAME-HERE
Successfully installed example-pkg-YOUR-USERNAME-HERE-0.0.1
````

Para más información y futuros pasos referir a la página: (<https://packaging.python.org/tutorials/packaging-projects/>) .