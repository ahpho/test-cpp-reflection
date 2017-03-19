setlocal
Tools\MetaParser.exe --target-name TestModule --source-root D:\work\Github\test-cpp-reflection\testR1 --in-source D:\work\Github\test-cpp-reflection\testR1\TestR\TestReflection.h --module-header D:\work\Github\test-cpp-reflection\testR1\TestR\TestReflectionModule.h --out-source D:\work\Github\test-cpp-reflection\testR1\Generated\Module.TestModule.Generated.cpp --out-dir D:\work\Github\test-cpp-reflection\testR1\Generated --includes D:\work\Github\test-cpp-reflection\testR1\Generated\Module.TestModule.Includes.txt
if %errorlevel% neq 0 goto :cmEnd
:cmEnd
endlocal & call :cmErrorLevel %errorlevel% & goto :cmDone
:cmErrorLevel
exit /b %1
:cmDone
if %errorlevel% neq 0 goto :VCEnd

@pause
