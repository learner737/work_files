@echo off
md CPP



for %%a in (*.proto) do (
 echo.���ڴ���%%~na

 	protoc2008.exe %%a --cpp_out=../Proto/
	

)
echo._____��ɣ�&pause>nul