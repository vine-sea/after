


@echo off
    set j=%cd%
    @REM echo %j%
	cd %2
    dir 


    FOR /L %%i IN (0,1,%3) DO (
         dvisvgm %1-figure%%i
    )
   
    FOR /L %%i IN (0,1,%3) DO (
        
        move %1-figure%%i.svg  ../done/
    )



    cd %j%