/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <VoiceServices/VoiceServices-Structs.h>
#import <VoiceServices/VSRecognitionAction.h>

@class NSString, NSAttributedString, NSArray;

@interface VSRecognitionRecognizeAction : VSRecognitionAction {
	NSString *_modelIdentifier;	// 24 = 0x18
	NSArray *_keywords;	// 28 = 0x1c
	void *_recognition;	// 32 = 0x20
	NSArray *_results;	// 36 = 0x24
	NSString *_debugDumpPath;	// 40 = 0x28
	NSString *_audioInputPath;	// 44 = 0x2c
	double _levelInterval;	// 48 = 0x30
	struct {
		unsigned debugDumpEnabled : 1;
		unsigned preferredEngine : 2;
		unsigned resetEngine : 1;
		unsigned bluetoothAllowed : 1;
		unsigned hasStarted : 1;
	} _recognizeFlags;	// 56 = 0x38
}
@property(readonly, retain) NSString *modelIdentifier;	// G=0x9671; converted property
- (id)initWithModelIdentifier:(id)modelIdentifier;	// 0x9709
- (void)dealloc;	// 0x9aa5
- (int)completionType;	// 0x966d
// converted property getter: - (id)modelIdentifier;	// 0x9671
- (BOOL)_isRecognizing;	// 0xa585
- (BOOL)_isActivelyRecognizing;	// 0xa55d
- (BOOL)_hasDeferredStartCallback;	// 0x9681
- (BOOL)_setBluetoothInputAllowed:(BOOL)allowed;	// 0x9685
- (BOOL)_setInputLevelUpdateInterval:(double)interval;	// 0xa511
- (float)_inputLevel;	// 0xa4cd
- (id)_keywords;	// 0x9749
- (id)_keywordAtIndex:(int)index;	// 0x97dd
- (int)_keywordCount;	// 0x9825
- (BOOL)_keywordIndexChanged;	// 0x984d
- (BOOL)_setDebugDumpEnabled:(BOOL)enabled dumpPath:(id)path;	// 0xa3c1
- (BOOL)_setDebugDumpEnabled:(BOOL)enabled;	// 0x9881
- (BOOL)_setDebugDumpPath:(id)path;	// 0x9899
- (id)_debugDumpPath;	// 0x96cd
- (BOOL)_setPreferredEngine:(int)engine;	// 0xa361
- (BOOL)_setAudioInputPath:(id)path;	// 0xa2e9
- (BOOL)_setEngineResetRequired:(BOOL)required;	// 0xa289
- (VSRecognitionRef)_createRecognitionInstanceWithCallbacks:(XXStruct__Vsh7C *)callbacks info:(void *)info;	// 0xa255
- (void)_configureNewRecognitionInstance;	// 0xa12d
- (id)perform;	// 0xa05d
- (id)cancel;	// 0xa001
- (void)_releaseFromPrepare;	// 0x9fad
- (void)_continueAfterDeferredStart;	// 0x9929
- (id)_actionForEmptyResults;	// 0x96dd
- (void)_setResults:(id)results;	// 0x9939
- (void)_reset;	// 0x9a29
- (void)_handleRecognitionPrepared:(VSRecognitionRef)prepared;	// 0x9981
- (void)_handleRecognitionStarted:(VSRecognitionRef)started;	// 0x96e1
- (void)_handleRecognitionCompleted:(VSRecognitionRef)completed withResults:(CFArrayRef)results error:(CFErrorRef)error;	// 0x9b69
- (void)_handledThreadedResults:(id)results nextAction:(id)action;	// 0x99e1
@end
