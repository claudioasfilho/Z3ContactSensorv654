@echo off
setlocal enableextensions enabledelayedexpansion
SET allParams=%*
SET params=%allParams:' '=","%
SET params=%params:'="%
set /a count=0
for %%i in (%params%) do (
  set /a count+=1
  set param[!count!]=%%i
)

set "studioInstallationDir=%param[4]:"=%"
set "projDir=%~dp0"
set "projDir=%projDir:"=%"

set "projDir=%projDir:\=/%"
set "projDir=%projDir:Z:=%"
start /unix "%studioInstallationDir%/jre/Contents/Home/bin/java" -jar "%studioInstallationDir%/../../../../../Library/Application Support/SimplicityStudio/v4/python/jython.jar"  "%projDir%/Z3ContactSensorv654-postbuild.py" %param[1]%  %param[2]%  "wine start /unix " "wine cmd /C" %param[3]% 