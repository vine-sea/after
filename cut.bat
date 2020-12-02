@echo off
    set j=%cd%
    @REM echo %j%
	cd %2
    dir 
   
    IF EXIST %1.tex (
    ren %1.tex m%1.tex
    ) 

    FOR %%i IN (%CD%\%1*) DO (del %%i)

    IF EXIST m%1.tex (
    ren m%1.tex %1.tex
    ) 
    cd %j%