#!/bin/bash
ulimit -c unlimited	
workdir=$(cd $(dirname $0); pwd)
LD_LIBRARY_PATH=$workdir/.libs/ ../../OpenSrc/Linux/protobuf/bin/./protoc  -I=./ProtoScript  --cpp_out=./Proto   ./ProtoScript/*.proto
