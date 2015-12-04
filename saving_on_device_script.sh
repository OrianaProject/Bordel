#!/bin/sh

DEVICE_NAME="Your device Name here."
DATE=$(date +"%d-%m-%y")
HEURE=$(date +"%T")
CURRENT="${PWD##/}"

mkdir -p "/Volumes/$DEVICE_NAME/Savings/$DATE/$HEURE"

echo "\n\nDirectories : \n"
ls -l /Volumes/$DEVICE_NAME/Savings

cp -R "/$CURRENT" "/Volumes/$DEVICE_NAME/Savings/$DATE/$HEURE/"

echo "\n\nFiles copied : \n"
ls -l "/Volumes/$DEVICE_NAME/Savings/$DATE"
