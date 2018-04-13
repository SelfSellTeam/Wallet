@echo 
echo Comparing two files: 
echo %1
if not exist %1gop_English.qm goto File1NotFound
if not exist %1gop_simplified_Chinese.qm goto File2NotFound

rem fc %1gop_English.qm   %1language\gop_English.qm 
rem if %ERRORLEVEL%==0 GOTO NoCopy

echo Copying gop_English.qm over %1language\gop_English.qm
xcopy %1gop_English.qm   %1language\gop_English.qm  /Y /F

echo Copying gop_simplified_Chinese.qm  %1language\gop_simplified_Chinese.qm
xcopy %1gop_simplified_Chinese.qm  %1language\gop_simplified_Chinese.qm /Y /F & goto END


:NoCopy
echo Files are the same.  Did nothing
goto END

:File1NotFound
echo gop_English.qm not found.

:File2NotFound
echo gop_simplified_Chinese.qm not found.
goto END

:END
echo Done.
