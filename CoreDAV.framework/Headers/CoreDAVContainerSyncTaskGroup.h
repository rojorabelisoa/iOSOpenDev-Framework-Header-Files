/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVDeleteTaskDelegate.h>
#import <CoreDAV/CoreDAVPutTaskDelegate.h>
#import <CoreDAV/CoreDAVGetTaskDelegate.h>

@class NSString, NSArray, NSDictionary, NSMutableSet, NSMutableArray, NSURL, NSMutableDictionary;
@protocol CoreDAVLocalDBInfoProvider;

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSURL *_folderURL;	// 48 = 0x30
	NSString *_previousCTag;	// 52 = 0x34
	NSString *_nextCTag;	// 56 = 0x38
	BOOL _ensureUpdatedCTag;	// 60 = 0x3c
	BOOL _useSyncCollection;	// 61 = 0x3d
	NSString *_previousSyncToken;	// 64 = 0x40
	NSString *_nextSyncToken;	// 68 = 0x44
	NSMutableArray *_actions;	// 72 = 0x48
	void *_context;	// 76 = 0x4c
	unsigned _multiGetBatchSize;	// 80 = 0x50
	NSMutableArray *_unsubmittedTasks;	// 84 = 0x54
	unsigned _maxIndependentTasks;	// 88 = 0x58
	NSURL *_addMemberURL;	// 92 = 0x5c
	BOOL _useMultiGet;	// 96 = 0x60
	NSDictionary *_bulkRequests;	// 100 = 0x64
	NSString *_bulkChangeCheckCTag;	// 104 = 0x68
	NSMutableSet *_syncReportDeletedURLs;	// 108 = 0x6c
	NSMutableDictionary *_urlToETag;	// 112 = 0x70
	Class _appSpecificDataItemClass;	// 116 = 0x74
	BOOL _syncItemOrder;	// 120 = 0x78
	NSMutableArray *_localItemURLOrder;	// 124 = 0x7c
	NSMutableDictionary *_remainingUUIDsToAddActions;	// 128 = 0x80
	NSMutableDictionary *_remainingHREFsToModDeleteActions;	// 132 = 0x84
	BOOL _actionsOnly;	// 136 = 0x88
}
@property(retain) NSString *nextCTag;	// G=0xba45; S=0xba59; @synthesize=_nextCTag
@property(assign) BOOL ensureUpdatedCTag;	// G=0xba7d; S=0xba8d; @synthesize=_ensureUpdatedCTag
@property(readonly, assign) NSArray *localItemURLOrder;	// G=0xbb05; @synthesize=_localItemURLOrder
@property(assign) BOOL actionsOnly;	// G=0xbb85; S=0xbb95; @synthesize=_actionsOnly
@property(retain) NSString *bulkChangeCheckCTag;	// G=0xbb4d; S=0xbb61; @synthesize=_bulkChangeCheckCTag
@property(retain) NSDictionary *bulkRequests;	// G=0xbb15; S=0xbb29; @synthesize=_bulkRequests
@property(retain) NSURL *addMemberURL;	// G=0xb965; S=0xb979; @synthesize=_addMemberURL
@property(assign) unsigned maxIndependentTasks;	// G=0xb9bd; S=0xb9cd; @synthesize=_maxIndependentTasks
@property(assign, nonatomic) id<CoreDAVLocalDBInfoProvider> delegate;	// @dynamic
@property(assign) BOOL useMultiGet;	// G=0xb9dd; S=0xb9ed; @synthesize=_useMultiGet
@property(assign) unsigned multiGetBatchSize;	// G=0xb99d; S=0xb9ad; @synthesize=_multiGetBatchSize
@property(readonly, assign) void *context;	// G=0xbaf5; @synthesize=_context
@property(assign) BOOL useSyncCollection;	// G=0xbad5; S=0xbae5; @synthesize=_useSyncCollection
@property(retain) NSString *previousSyncToken;	// G=0xba9d; S=0xbab1; @synthesize=_previousSyncToken
@property(retain) NSString *previousCTag;	// G=0xba0d; S=0xba21; @synthesize=_previousCTag
@property(readonly, assign) NSURL *folderURL;	// G=0xb9fd; @synthesize=_folderURL
// declared property setter: - (void)setActionsOnly:(BOOL)only;	// 0xbb95
// declared property getter: - (BOOL)actionsOnly;	// 0xbb85
// declared property setter: - (void)setBulkChangeCheckCTag:(id)tag;	// 0xbb61
// declared property getter: - (id)bulkChangeCheckCTag;	// 0xbb4d
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0xbb29
// declared property getter: - (id)bulkRequests;	// 0xbb15
// declared property getter: - (id)localItemURLOrder;	// 0xbb05
// declared property getter: - (void *)context;	// 0xbaf5
// declared property setter: - (void)setUseSyncCollection:(BOOL)collection;	// 0xbae5
// declared property getter: - (BOOL)useSyncCollection;	// 0xbad5
// declared property setter: - (void)setPreviousSyncToken:(id)token;	// 0xbab1
// declared property getter: - (id)previousSyncToken;	// 0xba9d
// declared property setter: - (void)setEnsureUpdatedCTag:(BOOL)tag;	// 0xba8d
// declared property getter: - (BOOL)ensureUpdatedCTag;	// 0xba7d
// declared property setter: - (void)setNextCTag:(id)tag;	// 0xba59
// declared property getter: - (id)nextCTag;	// 0xba45
// declared property setter: - (void)setPreviousCTag:(id)tag;	// 0xba21
// declared property getter: - (id)previousCTag;	// 0xba0d
// declared property getter: - (id)folderURL;	// 0xb9fd
// declared property setter: - (void)setUseMultiGet:(BOOL)get;	// 0xb9ed
// declared property getter: - (BOOL)useMultiGet;	// 0xb9dd
// declared property setter: - (void)setMaxIndependentTasks:(unsigned)tasks;	// 0xb9cd
// declared property getter: - (unsigned)maxIndependentTasks;	// 0xb9bd
// declared property setter: - (void)setMultiGetBatchSize:(unsigned)size;	// 0xb9ad
// declared property getter: - (unsigned)multiGetBatchSize;	// 0xb99d
// declared property setter: - (void)setAddMemberURL:(id)url;	// 0xb979
// declared property getter: - (id)addMemberURL;	// 0xb965
- (void)_getTask:(id)task finishedWithParsedContents:(id)parsedContents error:(id)error;	// 0xb6ad
- (void)getTask:(id)task data:(id)data error:(id)error;	// 0xb369
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0xaba5
- (BOOL)shouldFetchMoreETags;	// 0xaba1
- (void)deleteTask:(id)task completedWithError:(id)error;	// 0xa91d
- (void)task:(id)task didFinishWithError:(id)error;	// 0xa801
- (void)_bulkChangeTask:(id)task didFinishWithError:(id)error;	// 0xa595
- (void)_syncReportTask:(id)task didFinishWithError:(id)error;	// 0xa071
- (void)_postTask:(id)task didFinishWithError:(id)error;	// 0x9dbd
- (void)applyAdditionalPropertiesFromPostTask:(id)postTask;	// 0x9db9
- (void)putTask:(id)task completedWithNewETag:(id)newETag error:(id)error;	// 0x9a05
- (void)applyAdditionalPropertiesFromPutTask:(id)putTask;	// 0x9a01
- (void)syncAway;	// 0x99f1
- (void)startTaskGroup;	// 0x98fd
- (void)_getDataPayloads;	// 0x910d
- (void)_getOrder;	// 0x8f4d
- (void)_getETags;	// 0x8c51
- (id)copyGetEtagTaskWithPropertiesToFind:(id)find;	// 0x8ba5
- (void)_bulkChange;	// 0x8661
- (void)_sendNextBatch;	// 0x8045
- (void)_pushActions;	// 0x7b19
- (id)copyPostTaskWithPayloadItem:(id)payloadItem forAction:(id)action;	// 0x7a8d
- (id)copyPutTaskWithPayloadItem:(id)payloadItem forAction:(id)action;	// 0x79d5
- (void)_getCTag;	// 0x75c1
- (unsigned)_submitTasks;	// 0x733d
- (void)cancelTaskGroup;	// 0x72fd
- (void)bailWithError:(id)error;	// 0x72b9
- (void)_tearDownAllUnsubmittedTasks;	// 0x7185
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x7111
- (BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;	// 0x710d
- (id)copyAdditionalResourcePropertiesToFetch;	// 0x7109
- (Class)bulkChangeTaskClass;	// 0x70c5
- (id)dataContentType;	// 0x7081
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x703d
- (id)copyGetTaskWithURL:(id)url;	// 0x6ff9
- (id)description;	// 0x6f85
- (void)dealloc;	// 0x6e49
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x6c1d
@end
