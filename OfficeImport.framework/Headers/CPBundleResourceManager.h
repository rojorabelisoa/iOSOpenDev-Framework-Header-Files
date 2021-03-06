/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>
#import <OfficeImport/CPBundleResourceManager.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CPBundleResourceManager : XXUnknownSuperclass {
@private
	NSMutableDictionary *mPackageMap;	// 4 = 0x4
}
+ (id)instance;	// 0x1af629
+ (void)disposeInstance;	// 0x2c9a3d
- (id)init;	// 0x1af70d
- (void)dealloc;	// 0x2c9ba9
- (id)dataForResource:(id)resource ofType:(id)type inPackage:(id)package;	// 0x2c9afd
- (xmlDoc *)xmlDocumentForResource:(id)resource ofType:(id)type inPackage:(id)package;	// 0x1af771
@end

@interface CPBundleResourceManager (Private)
- (id)packageWithName:(id)name;	// 0x1af81d
@end
