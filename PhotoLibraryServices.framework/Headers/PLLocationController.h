/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/XXUnknownSuperclass.h>
#import <PhotoLibraryServices/CLLocationManagerDelegate.h>

@class NSMutableArray, NSString, CLLocationManager, NSDictionary;

@interface PLLocationController : XXUnknownSuperclass <CLLocationManagerDelegate> {
	CLLocationManager *_locationManager;	// 4 = 0x4
	NSMutableArray *_locationPendingAssets;	// 8 = 0x8
	NSDictionary *_exifDictionary;	// 12 = 0xc
	NSString *_locationStr;	// 16 = 0x10
	BOOL _isEnabled;	// 20 = 0x14
	BOOL _isUpdating;	// 21 = 0x15
	BOOL _isHeadingEnabled;	// 22 = 0x16
}
+ (id)sharedInstance;	// 0x157c5
+ (void)setUsesEffectiveBundleIdentifier:(BOOL)identifier;	// 0x157b5
+ (BOOL)usesEffectiveBundleIdentifier;	// 0x157a5
- (void)_albumsChanged:(id)changed;	// 0x16a31
- (void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;	// 0x169bd
- (void)_updatePendingAssets;	// 0x168cd
- (void)addLocationToMediaWithAssetURLWhenAvailable:(id)assetURLWhenAvailable deviceOrientation:(int)orientation cameraWasRearFacing:(BOOL)facing;	// 0x166cd
- (BOOL)_addLocationToAsset:(id)asset;	// 0x163dd
- (id)locationString;	// 0x16385
- (id)locationDictionaryForImageWithDeviceOrientation:(int)deviceOrientation rearFacingCamera:(BOOL)camera;	// 0x15e91
- (id)location;	// 0x15df5
- (void)_stopUpdating;	// 0x15d45
- (void)_startUpdating;	// 0x15b2d
- (void)setHeadingEnabled:(BOOL)enabled;	// 0x15acd
- (void)setEnabled:(BOOL)enabled;	// 0x15a9d
- (void)_applicationStateChanged:(id)changed;	// 0x15a8d
- (void)_updateLocationRunState;	// 0x15a01
- (void)dealloc;	// 0x15939
- (id)init;	// 0x1580d
@end
