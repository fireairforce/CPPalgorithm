@echo off
:again
r>input
a<input>output.a
b<input>output.b
fc output.a output.b >nul
if not errorlevel 1 goto again