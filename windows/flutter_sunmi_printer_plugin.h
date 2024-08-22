#ifndef FLUTTER_PLUGIN_FLUTTER_SUNMI_PRINTER_PLUGIN_H_
#define FLUTTER_PLUGIN_FLUTTER_SUNMI_PRINTER_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace flutter_sunmi_printer {

class FlutterSunmiPrinterPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  FlutterSunmiPrinterPlugin();

  virtual ~FlutterSunmiPrinterPlugin();

  // Disallow copy and assign.
  FlutterSunmiPrinterPlugin(const FlutterSunmiPrinterPlugin&) = delete;
  FlutterSunmiPrinterPlugin& operator=(const FlutterSunmiPrinterPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace flutter_sunmi_printer

#endif  // FLUTTER_PLUGIN_FLUTTER_SUNMI_PRINTER_PLUGIN_H_
