setlocal
Tools\MetaParser.exe --target-name TestModule --source-root C:\Users\kuangsihao1\Desktop\testR1\testR1 --in-source C:\Users\kuangsihao1\Desktop\testR1\testR1\TestR\TestReflection.h --module-header C:\Users\kuangsihao1\Desktop\testR1\testR1\TestR\TestReflectionModule.h --out-source C:\Users\kuangsihao1\Desktop\testR1\testR1\Generated\Module.TestModule.Generated.cpp --out-dir C:\Users\kuangsihao1\Desktop\testR1\testR1\Generated --includes C:\Users\kuangsihao1\Desktop\testR1\testR1\Generated/Module.TestModule.Includes.txt
if %errorlevel% neq 0 goto :cmEnd
:cmEnd
endlocal & call :cmErrorLevel %errorlevel% & goto :cmDone
:cmErrorLevel
exit /b %1
:cmDone
if %errorlevel% neq 0 goto :VCEnd

@pause
