import 'package:flutter_test/flutter_test.dart';
import 'package:flutter_sunmi_printer/flutter_sunmi_printer.dart';
import 'package:flutter_sunmi_printer/flutter_sunmi_printer_platform_interface.dart';
import 'package:flutter_sunmi_printer/flutter_sunmi_printer_method_channel.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';

class MockFlutterSunmiPrinterPlatform
    with MockPlatformInterfaceMixin
    implements FlutterSunmiPrinterPlatform {

  @override
  Future<String?> getPlatformVersion() => Future.value('42');
}

void main() {
  final FlutterSunmiPrinterPlatform initialPlatform = FlutterSunmiPrinterPlatform.instance;

  test('$MethodChannelFlutterSunmiPrinter is the default instance', () {
    expect(initialPlatform, isInstanceOf<MethodChannelFlutterSunmiPrinter>());
  });

  test('getPlatformVersion', () async {
    FlutterSunmiPrinter flutterSunmiPrinterPlugin = FlutterSunmiPrinter();
    MockFlutterSunmiPrinterPlatform fakePlatform = MockFlutterSunmiPrinterPlatform();
    FlutterSunmiPrinterPlatform.instance = fakePlatform;

    expect(await flutterSunmiPrinterPlugin.getPlatformVersion(), '42');
  });
}
