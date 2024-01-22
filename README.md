# C++ GUI programming for beginner

Reference [Youtube](https://youtube.com/playlist?list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G&si=PniCCJBZNctsoeHX)

## Install Visual Studio 2022

Download installer form [Visual Studio 2022/Downloads](https://visualstudio.microsoft.com/downloads/)

## Install wxWidgets

- Download .zip package from [wxWidgets/Downloads](https://wxwidgets.org/downloads)

- Extract downloaded package (e.g. `wxWidgets-x.x.x.zip`) to somewhere like `C:\Libraries`

- Create an Environment Variable 
>
> `Start` > `Edit the system environment variables` > `Environment Variables..`
>
> Add new `System Variable`: 
> 
> - `Variable name: WXWIN`
>
> - `Variable value: C:\Libraries\wxWidgets-x.x.x`
>

- Build wxWidgets from source:
>
> Go to `C:\Libraries\wxWidgets-x.x.x\build\msw`, find and open `wx_vc17.sln` in `Visual Studio 2022`
>
> Choose configuration `Debug`/`Release` and platform `Win32`/`x64` > Build > Build Solution (build each config-platform pair once)
>

- Configure wxWidgets libs 
> 
> Create C++ project in Visual Studio
>
> Right click on project and choose Properties
>
> - `Configuration: All Configurations` and `Platform: All Platforms`
>
> - Goto setting for `C/C++` > `Additional Include Directories` > `<Edit...>` > Enter `$(WXWIN)\include` and `$(WXWIN)\include\msvc` > `OK`
> 
> - Goto setting for `Linker`/`System` > Change `SubSystem` from `Console(/SUBSYSTEM:CONSOLE)` to `Windows(/SUBSYSTEM:WINDOWS)` > `Apply`
>
> - Change `Platform` to `Win32` > Goto setting `Linker`/`General` > `Additional Library Directories` > Enter `$(WXWIN)\lib\vc_lib` > `Apply`
>
> - Change `Platform` to `x64` > Goto setting `Linker`/`General` > `Additional Library Directories` > Enter `$(WXWIN)\lib\vc_x64_lib` > `Apply`
>
> - `OK`
>
