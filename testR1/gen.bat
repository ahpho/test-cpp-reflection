setlocal
Tools\MetaParser.exe --target-name TestModule --source-root E:\work\work_cpp\test-cpp-reflection\testR1 --in-source E:\work\work_cpp\test-cpp-reflection\testR1\TestR\TestReflection.h --module-header E:\work\work_cpp\test-cpp-reflection\testR1\TestR\TestReflectionModule.h --out-source E:\work\work_cpp\test-cpp-reflection\testR1\Generated\Module.TestModule.Generated.cpp --out-dir E:\work\work_cpp\test-cpp-reflection\testR1\Generated --includes E:\work\work_cpp\test-cpp-reflection\testR1\Generated\Module.TestModule.Includes.txt
if %errorlevel% neq 0 goto :cmEnd
:cmEnd
endlocal & call :cmErrorLevel %errorlevel% & goto :cmDone
:cmErrorLevel
exit /b %1
:cmDone
if %errorlevel% neq 0 goto :VCEnd

@pause
