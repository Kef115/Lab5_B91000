Antes de proceder, estar seguros de contar con el comando "make" y "cmake" instalados, sino entonces implementar el comando "sudo apt install make" y lo mismo para "cmake"

El programa puede compilarse y ejecutarse de tres formas distintas:
1. Usando Make
2. Usando CMake
3. Usando Meson
-----------------------------------------------------------------------------------------------
1. Make
Estando en el directorio "proyecto" para ejecutar todo el codigo es necesario ejecutar el comando "make"
Esto generará un ejecutable llamado "build/mi_programa".
Para ejecutarlo se debe escribir en la terminal "./build/mi_programa"

-----------------------------------------------------------------------------------------
2. Cmake
Para la siguiente parte de ejecutar el CMake es necesario ubicarse en la carpeta "Proyecto" y ejecutar el comando "cd build"
una vez dentro ejecutar "cmake .."
y por ultimo "make"

Esto genera el ejecutable "mi_programa" dentro de la ruta "build/"
luego hay que pasarse a la ruta dentro de "build" usando cd y una vez dentro se ejecuta las siguientes lineas:
cmake ..
make
./mi_programaeso mostrara en la terminal el mensaje que se quiere 

-----------------------------------------------------------------------------------------
3.Meson
para este ultimo apartado de debe contar con el comando meso, para ello usar:pip install meson ninja  # o: sudo apt install meson ninja-build
-Crear directorio de compilacion estando en la raiz de proyecto usando: "meson setup build"
-Compilar usando: "meson compile -C build"
-Ejecutar con el comando: "./build/mi_programa"

Se verá en pantalla la informació solicitada 
