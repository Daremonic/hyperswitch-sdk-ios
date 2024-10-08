/**
* This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
*
* Do not edit this file as changes may cause incorrect behavior and will be lost
* once the code is regenerated.
*
* @generated by codegen project: GenerateComponentHObjCpp.js
*/

#import <Foundation/Foundation.h>
#import <React/RCTDefines.h>
#import <React/RCTLog.h>

NS_ASSUME_NONNULL_BEGIN

@protocol RCTRNKlarnaCheckoutViewViewProtocol <NSObject>
- (void)setSnippet:(NSString *)snippet;
- (void)suspend;
- (void)resume;
@end

RCT_EXTERN inline void RCTRNKlarnaCheckoutViewHandleCommand(
  id<RCTRNKlarnaCheckoutViewViewProtocol> componentView,
  NSString const *commandName,
  NSArray const *args)
{
  if ([commandName isEqualToString:@"setSnippet"]) {
#if RCT_DEBUG
  if ([args count] != 1) {
    RCTLogError(@"%@ command %@ received %d arguments, expected %d.", @"RNKlarnaCheckoutView", commandName, (int)[args count], 1);
    return;
  }
#endif

  NSObject *arg0 = args[0];
#if RCT_DEBUG
  if (!RCTValidateTypeOfViewCommandArgument(arg0, [NSString class], @"string", @"RNKlarnaCheckoutView", commandName, @"1st")) {
    return;
  }
#endif
  NSString * snippet = (NSString *)arg0;

  [componentView setSnippet:snippet];
  return;
}

if ([commandName isEqualToString:@"suspend"]) {
#if RCT_DEBUG
  if ([args count] != 0) {
    RCTLogError(@"%@ command %@ received %d arguments, expected %d.", @"RNKlarnaCheckoutView", commandName, (int)[args count], 0);
    return;
  }
#endif

  

  [componentView suspend];
  return;
}

if ([commandName isEqualToString:@"resume"]) {
#if RCT_DEBUG
  if ([args count] != 0) {
    RCTLogError(@"%@ command %@ received %d arguments, expected %d.", @"RNKlarnaCheckoutView", commandName, (int)[args count], 0);
    return;
  }
#endif

  

  [componentView resume];
  return;
}

#if RCT_DEBUG
  RCTLogError(@"%@ received command %@, which is not a supported command.", @"RNKlarnaCheckoutView", commandName);
#endif
}

@protocol RCTRNKlarnaPaymentViewViewProtocol <NSObject>
- (void)initialize:(NSString *)clientToken returnUrl:(NSString *)returnUrl;
- (void)load:(NSString *)sessionData;
- (void)loadPaymentReview;
- (void)authorize:(BOOL)autoFinalize sessionData:(NSString *)sessionData;
- (void)reauthorize:(NSString *)sessionData;
- (void)finalize:(NSString *)sessionData;
@end

RCT_EXTERN inline void RCTRNKlarnaPaymentViewHandleCommand(
  id<RCTRNKlarnaPaymentViewViewProtocol> componentView,
  NSString const *commandName,
  NSArray const *args)
{
  if ([commandName isEqualToString:@"initialize"]) {
#if RCT_DEBUG
  if ([args count] != 2) {
    RCTLogError(@"%@ command %@ received %d arguments, expected %d.", @"RNKlarnaPaymentView", commandName, (int)[args count], 2);
    return;
  }
#endif

  NSObject *arg0 = args[0];
#if RCT_DEBUG
  if (!RCTValidateTypeOfViewCommandArgument(arg0, [NSString class], @"string", @"RNKlarnaPaymentView", commandName, @"1st")) {
    return;
  }
#endif
  NSString * clientToken = (NSString *)arg0;

NSObject *arg1 = args[1];
#if RCT_DEBUG
  if (!RCTValidateTypeOfViewCommandArgument(arg1, [NSString class], @"string", @"RNKlarnaPaymentView", commandName, @"2nd")) {
    return;
  }
#endif
  NSString * returnUrl = (NSString *)arg1;

  [componentView initialize:clientToken returnUrl:returnUrl];
  return;
}

if ([commandName isEqualToString:@"load"]) {
#if RCT_DEBUG
  if ([args count] != 1) {
    RCTLogError(@"%@ command %@ received %d arguments, expected %d.", @"RNKlarnaPaymentView", commandName, (int)[args count], 1);
    return;
  }
#endif

  NSObject *arg0 = args[0];
#if RCT_DEBUG
  if (!RCTValidateTypeOfViewCommandArgument(arg0, [NSString class], @"string", @"RNKlarnaPaymentView", commandName, @"1st")) {
    return;
  }
#endif
  NSString * sessionData = (NSString *)arg0;

  [componentView load:sessionData];
  return;
}

if ([commandName isEqualToString:@"loadPaymentReview"]) {
#if RCT_DEBUG
  if ([args count] != 0) {
    RCTLogError(@"%@ command %@ received %d arguments, expected %d.", @"RNKlarnaPaymentView", commandName, (int)[args count], 0);
    return;
  }
#endif

  

  [componentView loadPaymentReview];
  return;
}

if ([commandName isEqualToString:@"authorize"]) {
#if RCT_DEBUG
  if ([args count] != 2) {
    RCTLogError(@"%@ command %@ received %d arguments, expected %d.", @"RNKlarnaPaymentView", commandName, (int)[args count], 2);
    return;
  }
#endif

  NSObject *arg0 = args[0];
#if RCT_DEBUG
  if (!RCTValidateTypeOfViewCommandArgument(arg0, [NSNumber class], @"boolean", @"RNKlarnaPaymentView", commandName, @"1st")) {
    return;
  }
#endif
  BOOL autoFinalize = [(NSNumber *)arg0 boolValue];

NSObject *arg1 = args[1];
#if RCT_DEBUG
  if (!RCTValidateTypeOfViewCommandArgument(arg1, [NSString class], @"string", @"RNKlarnaPaymentView", commandName, @"2nd")) {
    return;
  }
#endif
  NSString * sessionData = (NSString *)arg1;

  [componentView authorize:autoFinalize sessionData:sessionData];
  return;
}

if ([commandName isEqualToString:@"reauthorize"]) {
#if RCT_DEBUG
  if ([args count] != 1) {
    RCTLogError(@"%@ command %@ received %d arguments, expected %d.", @"RNKlarnaPaymentView", commandName, (int)[args count], 1);
    return;
  }
#endif

  NSObject *arg0 = args[0];
#if RCT_DEBUG
  if (!RCTValidateTypeOfViewCommandArgument(arg0, [NSString class], @"string", @"RNKlarnaPaymentView", commandName, @"1st")) {
    return;
  }
#endif
  NSString * sessionData = (NSString *)arg0;

  [componentView reauthorize:sessionData];
  return;
}

if ([commandName isEqualToString:@"finalize"]) {
#if RCT_DEBUG
  if ([args count] != 1) {
    RCTLogError(@"%@ command %@ received %d arguments, expected %d.", @"RNKlarnaPaymentView", commandName, (int)[args count], 1);
    return;
  }
#endif

  NSObject *arg0 = args[0];
#if RCT_DEBUG
  if (!RCTValidateTypeOfViewCommandArgument(arg0, [NSString class], @"string", @"RNKlarnaPaymentView", commandName, @"1st")) {
    return;
  }
#endif
  NSString * sessionData = (NSString *)arg0;

  [componentView finalize:sessionData];
  return;
}

#if RCT_DEBUG
  RCTLogError(@"%@ received command %@, which is not a supported command.", @"RNKlarnaPaymentView", commandName);
#endif
}

@protocol RCTRNKlarnaStandaloneWebViewViewProtocol <NSObject>
- (void)load:(NSString *)url;
- (void)goBack;
- (void)goForward;
- (void)reload;
@end

RCT_EXTERN inline void RCTRNKlarnaStandaloneWebViewHandleCommand(
  id<RCTRNKlarnaStandaloneWebViewViewProtocol> componentView,
  NSString const *commandName,
  NSArray const *args)
{
  if ([commandName isEqualToString:@"load"]) {
#if RCT_DEBUG
  if ([args count] != 1) {
    RCTLogError(@"%@ command %@ received %d arguments, expected %d.", @"RNKlarnaStandaloneWebView", commandName, (int)[args count], 1);
    return;
  }
#endif

  NSObject *arg0 = args[0];
#if RCT_DEBUG
  if (!RCTValidateTypeOfViewCommandArgument(arg0, [NSString class], @"string", @"RNKlarnaStandaloneWebView", commandName, @"1st")) {
    return;
  }
#endif
  NSString * url = (NSString *)arg0;

  [componentView load:url];
  return;
}

if ([commandName isEqualToString:@"goBack"]) {
#if RCT_DEBUG
  if ([args count] != 0) {
    RCTLogError(@"%@ command %@ received %d arguments, expected %d.", @"RNKlarnaStandaloneWebView", commandName, (int)[args count], 0);
    return;
  }
#endif

  

  [componentView goBack];
  return;
}

if ([commandName isEqualToString:@"goForward"]) {
#if RCT_DEBUG
  if ([args count] != 0) {
    RCTLogError(@"%@ command %@ received %d arguments, expected %d.", @"RNKlarnaStandaloneWebView", commandName, (int)[args count], 0);
    return;
  }
#endif

  

  [componentView goForward];
  return;
}

if ([commandName isEqualToString:@"reload"]) {
#if RCT_DEBUG
  if ([args count] != 0) {
    RCTLogError(@"%@ command %@ received %d arguments, expected %d.", @"RNKlarnaStandaloneWebView", commandName, (int)[args count], 0);
    return;
  }
#endif

  

  [componentView reload];
  return;
}

#if RCT_DEBUG
  RCTLogError(@"%@ received command %@, which is not a supported command.", @"RNKlarnaStandaloneWebView", commandName);
#endif
}

NS_ASSUME_NONNULL_END