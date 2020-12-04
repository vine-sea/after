


@echo off
    set j=%cd%
    set pa=C:\Users\26280\Desktop\after\p2s\dist-64bits\pdf2svg.exe
    @REM echo %j%
	cd %2
    dir 


    FOR /L %%i IN (0,1,%3) DO (

          %pa% %1-figure%%i.pdf %1-figure%%i.svg
        @REM  dvisvgm %1-figure%%i
    )
   
    FOR /L %%i IN (0,1,%3) DO (
        
        move %1-figure%%i.svg  ../done/
    )



    cd %j%