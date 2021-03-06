/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <iAdCore/iAdCore-Structs.h>
#import <iAdCore/XXUnknownSuperclass.h>

@class NSMutableDictionary, NSString, NSMapTable;
@protocol UIWebViewDelegate, ADWebViewDelegate;

@interface ADWebView : XXUnknownSuperclass {
@private
	id<UIWebViewDelegate, ADWebViewDelegate> _delegate;	// 52 = 0x34
	NSMutableDictionary *_resourceLoadStartDates;	// 56 = 0x38
	BOOL _shouldReportResourceTiming;	// 60 = 0x3c
	BOOL _shouldReportScriptErrors;	// 61 = 0x3d
	NSMapTable *_scriptSources;	// 64 = 0x40
	BOOL _webGLEnabled;	// 68 = 0x44
	BOOL _paused;	// 69 = 0x45
	NSString *_userAgent;	// 72 = 0x48
}
@property(retain, nonatomic) NSMapTable *scriptSources;	// G=0x4cbf1; S=0x4cc01; @synthesize=_scriptSources
@property(retain, nonatomic) NSMutableDictionary *resourceLoadStartDates;	// G=0x4cb7d; S=0x4cb8d; @synthesize=_resourceLoadStartDates
@property(readonly, assign, nonatomic) OpaqueJSContext *javaScriptContextRef;	// G=0x4bed5; 
@property(copy) NSString *userAgent;	// G=0x4cc45; S=0x4cc59; @synthesize=_userAgent
@property(assign, nonatomic) BOOL shouldReportScriptErrors;	// G=0x4cbd1; S=0x4cbe1; @synthesize=_shouldReportScriptErrors
@property(assign, nonatomic) BOOL shouldReportResourceTiming;	// G=0x4cbb1; S=0x4cbc1; @synthesize=_shouldReportResourceTiming
@property(assign, nonatomic) id<UIWebViewDelegate, ADWebViewDelegate> delegate;	// G=0x4cb6d; S=0x4bde9; @synthesize=_delegate
@property(assign, nonatomic) BOOL webGLEnabled;	// G=0x4cc25; S=0x4be29; @synthesize=_webGLEnabled
@property(assign, nonatomic) BOOL paused;	// G=0x4cc35; S=0x4bb21; @synthesize=_paused
+ (void)clearContentStorage;	// 0x4b5fd
+ (void)_resetMemoryLogging:(id)logging;	// 0x4b5ed
+ (void)initialize;	// 0x4b4f9
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x4cc59
// declared property getter: - (id)userAgent;	// 0x4cc45
// declared property getter: - (BOOL)paused;	// 0x4cc35
// declared property getter: - (BOOL)webGLEnabled;	// 0x4cc25
// declared property setter: - (void)setScriptSources:(id)sources;	// 0x4cc01
// declared property getter: - (id)scriptSources;	// 0x4cbf1
// declared property setter: - (void)setShouldReportScriptErrors:(BOOL)reportScriptErrors;	// 0x4cbe1
// declared property getter: - (BOOL)shouldReportScriptErrors;	// 0x4cbd1
// declared property setter: - (void)setShouldReportResourceTiming:(BOOL)reportResourceTiming;	// 0x4cbc1
// declared property getter: - (BOOL)shouldReportResourceTiming;	// 0x4cbb1
// declared property setter: - (void)setResourceLoadStartDates:(id)dates;	// 0x4cb8d
// declared property getter: - (id)resourceLoadStartDates;	// 0x4cb7d
// declared property getter: - (id)delegate;	// 0x4cb6d
- (void)webView:(id)view exceptionWasRaised:(id)raised hasHandler:(BOOL)handler sourceId:(long)anId line:(int)line forWebFrame:(id)webFrame;	// 0x4c911
- (void)webView:(id)view failedToParseSource:(id)parseSource baseLineNumber:(unsigned)number fromURL:(id)url withError:(id)error forWebFrame:(id)webFrame;	// 0x4c6c5
- (void)webView:(id)view didParseSource:(id)source baseLineNumber:(unsigned)number fromURL:(id)url sourceId:(long)anId forWebFrame:(id)webFrame;	// 0x4c689
- (void)webThreadWebView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;	// 0x4c479
- (void)webThreadWebView:(id)view resource:(id)resource didReceiveResponse:(id)response fromDataSource:(id)dataSource;	// 0x4c395
- (id)webThreadWebView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;	// 0x4c245
- (id)webThreadWebView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;	// 0x4c195
- (void)loadWebArchive:(id)archive;	// 0x4c0bd
- (void)sendOrientationEventForOrientation:(int)orientation;	// 0x4c091
- (void)dispatchDOMEventWithName:(id)name canBubble:(BOOL)bubble cancelable:(BOOL)cancelable;	// 0x4bf1d
// declared property getter: - (OpaqueJSContext *)javaScriptContextRef;	// 0x4bed5
// declared property setter: - (void)setWebGLEnabled:(BOOL)enabled;	// 0x4be29
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4bde9
- (void)_handleConsoleMessage:(id)message;	// 0x4bc35
- (id)stringByEvaluatingJavaScriptFromString:(id)string;	// 0x4bb65
// declared property setter: - (void)setPaused:(BOOL)paused;	// 0x4bb21
- (id)initWithFrame:(CGRect)frame;	// 0x4b7dd
- (void)dealloc;	// 0x4b6cd
@end
