#include "include/flutter_sunmi_printer/flutter_sunmi_printer_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "flutter_sunmi_printer_plugin.h"

void FlutterSunmiPrinterPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  flutter_sunmi_printer::FlutterSunmiPrinterPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
