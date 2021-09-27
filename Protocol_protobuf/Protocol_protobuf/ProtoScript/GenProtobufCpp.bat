@echo off
md CPP



for %%a in (*.proto) do (
 echo.正在处理：%%~na

 	protoc2008.exe %%a --cpp_out=../Proto/
	

)
echo._____完成！&pause>nul