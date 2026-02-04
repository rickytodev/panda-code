param (
    [string]$name,
    [string]$folder
)

Write-Host "Nombre del ejercicio:" $name
Write-Host "Nombre de la carpeta:" $folder

if (-Not (Test-Path ./build/$folder)) {
    New-Item -ItemType Directory -Path ./build/$folder
}

gcc ./src/$folder/$name.c -o ./build/$folder/$name

Write-Host "Ejecutando el programa..."

Clear-Host

& ./build/$folder/$name.exe
