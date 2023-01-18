-- premake5.lua
workspace "RayTracingSeries"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "RayTracingSeries"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
include "Walnut/WalnutExternal.lua"

include "RayTracingSeries"