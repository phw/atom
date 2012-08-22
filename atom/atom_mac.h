#include "include/cef_app.h"

@interface Atom : NSApplication <CefAppProtocol, NSApplicationDelegate> {
@private
  NSWindow *_hiddenWindow;
	
 CefRefPtr<ClientHandler> _clientHandler;
	
  BOOL handlingSendEvent_;
}

+ (void)populateAppSettings:(CefSettings &)settings;
- (void)open:(NSString *)path;
- (IBAction)runSpecs:(id)sender;
- (IBAction)runBenchmarks:(id)sender;

@end