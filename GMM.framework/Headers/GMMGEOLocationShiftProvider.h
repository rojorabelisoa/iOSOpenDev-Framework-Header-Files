/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/PBRequesterDelegate.h>
#import <GMM/XXUnknownSuperclass.h>

@class GMMRequester;

@interface GMMGEOLocationShiftProvider : XXUnknownSuperclass <PBRequesterDelegate> {
	GMMRequester *_requester;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
	id _finishedHandler;	// 12 = 0xc
}
+ (unsigned short)providerID;	// 0x3f019
- (void)requesterDidFinish:(id)requester;	// 0x3f349
- (void)requesterDidCancel:(id)requester;	// 0x3f2f9
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x3f2d9
- (void)cancelRequest;	// 0x3f2b9
- (void)startRequest:(id)request finished:(id)finished error:(id)error;	// 0x3f0ad
- (void)dealloc;	// 0x3f021
@end
