@echo off
    set j=%cd%
    set pa=%3
	cd %1
    dir 

    FOR  %%i IN (%cd%/*.pdf) DO (
    %pa%  %%~ni.pdf %%~ni.svg 
    @REM echo %%~ni.pdf %%~ni.svg 
    @REM  dvisvgm %1-figure%%i
    )

    FOR  %%i IN (%cd%/*.svg) DO (
    move %%~ni.svg  ../%2/
    )

    cd %j%