/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/XXUnknownSuperclass.h>

@class NSString;

@interface DATrafficLogger : XXUnknownSuperclass {
	NSString *_filename;	// 4 = 0x4
}
+ (BOOL)enabled;	// 0x250dd
- (void)logSnippet:(id)snippet;	// 0x250e9
- (void)dealloc;	// 0x25091
- (id)initWithFilename:(id)filename;	// 0x25029
- (void)_ensureCustomLogFile;	// 0x24dc1
@end
