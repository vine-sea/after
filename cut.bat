
@echo off& setlocal EnableDelayedExpansion
    set j=%cd%
    
    @REM echo %j%
	cd %1
    dir 
   
     set /a flag=1

     FOR  %%i IN (%cd%/*) DO (

        @REM echo  %%~xi

        set /a flag=0
        @REM IF  %%~xi == .pdf     set /a flag=1
        IF  %%~xi == .tex     set /a flag=1
        IF  %%~xi == .png     set /a flag=1
        @REM IF !flag! == 1  echo dont delete me
        IF not !flag! == 1 del %%~nxi


     )


    cd %j%