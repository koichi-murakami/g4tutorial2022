#!/bin/sh
#########################################################################
# This is a script to build a tutorial application
#########################################################################

### Set variables
assumedDir="P04_FirstStep"
nameFileSource="./util/G4Codes/AppliMain.cc_P04_FirstStep"

### Check whether in the right directory
currentDir=`basename $(pwd)`
if [ $currentDir != $assumedDir ] ; then
  echo "Error: The script is only allowed to execute under '$assumedDir'"
  exit 1
fi

### Copy the source file to the target
if [ -f $nameFileSource ] ; then
  cp $nameFileSource ./source/Application_Main.cc
else
  echo "Error: The source file '$nameFileSource' does not exist!"
  exit 1
fi

### Clean up work directories
if [ -d build ] ; then
  rm -r build
fi

if [ -d bin ] ; then
  rm -r bin
fi

### Build using cmake
mkdir build
cd build
cmake ../source
make
make install
