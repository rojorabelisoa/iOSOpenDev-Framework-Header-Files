/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/XXUnknownSuperclass.h>

@class UIView, NSTimer, CKSendingProgressView, NSString, CKAggregateConversation, NSMutableSet;

@interface CKTranscriptStatusController : XXUnknownSuperclass {
	UIView *_multipleRecipientTitleView;	// 4 = 0x4
	CKSendingProgressView *_statusView;	// 8 = 0x8
	NSString *_title;	// 12 = 0xc
	CKAggregateConversation *_conversation;	// 16 = 0x10
	float _lastVal;	// 20 = 0x14
	NSString *_lastMsg;	// 24 = 0x18
	NSTimer *_progressUpdateTimer;	// 28 = 0x1c
	NSMutableSet *_currentMessages;	// 32 = 0x20
	BOOL _updatingProgress;	// 36 = 0x24
	BOOL _viewTitle;	// 37 = 0x25
	BOOL _finishingUp;	// 38 = 0x26
	id _delegate;	// 40 = 0x28
	BOOL _suspended;	// 44 = 0x2c
}
@property(retain, nonatomic) CKAggregateConversation *conversation;	// G=0x55165; S=0x55175; @synthesize=_conversation
@property(copy, nonatomic) NSString *title;	// G=0x55155; S=0x551cd; @synthesize=_title
@property(assign, nonatomic) id delegate;	// G=0x55135; S=0x55145; @synthesize=_delegate
- (void)dealloc;	// 0x55735
// declared property setter: - (void)setConversation:(id)conversation;	// 0x55175
// declared property setter: - (void)setTitle:(id)title;	// 0x551cd
- (void)brieflyShowName;	// 0x55229
- (void)reset;	// 0x55271
- (BOOL)_shouldShowProgress;	// 0x563c1
- (void)refresh;	// 0x562e9
- (id)_localizedTitleForSendingPart:(int)sendingPart ofPart:(int)part;	// 0x561bd
- (void)_updateTitle:(BOOL)title;	// 0x55fc5
- (void)_hideName;	// 0x55345
- (id)_statusView;	// 0x55f35
- (void)_updateNavItemTitleView:(BOOL)view;	// 0x55e51
- (void)_updateCurrentMessages;	// 0x55d6d
- (void)_startUpdatingProgress;	// 0x55359
- (void)_refreshNavigationItemView;	// 0x55399
- (void)_refreshNavigationItemViewAnimate:(BOOL)animate;	// 0x553ad
- (BOOL)_calcVals:(BOOL *)vals;	// 0x555a5
- (void)_finishProgress;	// 0x55d01
- (id)_title;	// 0x55715
- (void)resetProgress;	// 0x55c21
- (id)_generateStatusTitle;	// 0x55a79
- (float)_generateVal;	// 0x55869
- (void)suspend;	// 0x55841
- (void)resume;	// 0x55819
// declared property getter: - (id)delegate;	// 0x55135
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x55145
// declared property getter: - (id)title;	// 0x55155
// declared property getter: - (id)conversation;	// 0x55165
@end