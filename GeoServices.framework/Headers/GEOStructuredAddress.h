/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSMutableArray;

@interface GEOStructuredAddress : PBCodable {
	NSString *_country;	// 4 = 0x4
	NSString *_countryCode;	// 8 = 0x8
	NSString *_administrativeArea;	// 12 = 0xc
	NSString *_administrativeAreaCode;	// 16 = 0x10
	NSString *_subAdministrativeArea;	// 20 = 0x14
	NSString *_locality;	// 24 = 0x18
	NSString *_postCode;	// 28 = 0x1c
	NSString *_subLocality;	// 32 = 0x20
	NSString *_premises;	// 36 = 0x24
	NSString *_thoroughfare;	// 40 = 0x28
	NSString *_subThoroughfare;	// 44 = 0x2c
	NSString *_fullThoroughfare;	// 48 = 0x30
	NSString *_postCodeExtension;	// 52 = 0x34
	NSMutableArray *_areaOfInterests;	// 56 = 0x38
	NSString *_inlandWater;	// 60 = 0x3c
	NSString *_ocean;	// 64 = 0x40
	NSMutableArray *_dependentLocalitys;	// 68 = 0x44
	XXStruct_19EQxD _geoIds;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) long long *geoIds;	// G=0x2da21; 
@property(readonly, assign, nonatomic) unsigned geoIdsCount;	// G=0x2da0d; 
@property(retain, nonatomic) NSMutableArray *dependentLocalitys;	// G=0x2e8f5; S=0x2e905; @synthesize=_dependentLocalitys
@property(retain, nonatomic) NSString *ocean;	// G=0x2e8c1; S=0x2e8d1; @synthesize=_ocean
@property(readonly, assign, nonatomic) BOOL hasOcean;	// G=0x2d951; 
@property(retain, nonatomic) NSString *inlandWater;	// G=0x2e88d; S=0x2e89d; @synthesize=_inlandWater
@property(readonly, assign, nonatomic) BOOL hasInlandWater;	// G=0x2d939; 
@property(retain, nonatomic) NSMutableArray *areaOfInterests;	// G=0x2e859; S=0x2e869; @synthesize=_areaOfInterests
@property(retain, nonatomic) NSString *postCodeExtension;	// G=0x2e825; S=0x2e835; @synthesize=_postCodeExtension
@property(readonly, assign, nonatomic) BOOL hasPostCodeExtension;	// G=0x2d87d; 
@property(retain, nonatomic) NSString *fullThoroughfare;	// G=0x2e7f1; S=0x2e801; @synthesize=_fullThoroughfare
@property(readonly, assign, nonatomic) BOOL hasFullThoroughfare;	// G=0x2d865; 
@property(retain, nonatomic) NSString *subThoroughfare;	// G=0x2e7bd; S=0x2e7cd; @synthesize=_subThoroughfare
@property(readonly, assign, nonatomic) BOOL hasSubThoroughfare;	// G=0x2d84d; 
@property(retain, nonatomic) NSString *thoroughfare;	// G=0x2e789; S=0x2e799; @synthesize=_thoroughfare
@property(readonly, assign, nonatomic) BOOL hasThoroughfare;	// G=0x2d835; 
@property(retain, nonatomic) NSString *premises;	// G=0x2e755; S=0x2e765; @synthesize=_premises
@property(readonly, assign, nonatomic) BOOL hasPremises;	// G=0x2d81d; 
@property(retain, nonatomic) NSString *subLocality;	// G=0x2e721; S=0x2e731; @synthesize=_subLocality
@property(readonly, assign, nonatomic) BOOL hasSubLocality;	// G=0x2d805; 
@property(retain, nonatomic) NSString *postCode;	// G=0x2e6ed; S=0x2e6fd; @synthesize=_postCode
@property(readonly, assign, nonatomic) BOOL hasPostCode;	// G=0x2d7ed; 
@property(retain, nonatomic) NSString *locality;	// G=0x2e6b9; S=0x2e6c9; @synthesize=_locality
@property(readonly, assign, nonatomic) BOOL hasLocality;	// G=0x2d7d5; 
@property(retain, nonatomic) NSString *subAdministrativeArea;	// G=0x2e685; S=0x2e695; @synthesize=_subAdministrativeArea
@property(readonly, assign, nonatomic) BOOL hasSubAdministrativeArea;	// G=0x2d7bd; 
@property(retain, nonatomic) NSString *administrativeAreaCode;	// G=0x2e651; S=0x2e661; @synthesize=_administrativeAreaCode
@property(readonly, assign, nonatomic) BOOL hasAdministrativeAreaCode;	// G=0x2d7a5; 
@property(retain, nonatomic) NSString *administrativeArea;	// G=0x2e61d; S=0x2e62d; @synthesize=_administrativeArea
@property(readonly, assign, nonatomic) BOOL hasAdministrativeArea;	// G=0x2d78d; 
@property(retain, nonatomic) NSString *countryCode;	// G=0x2e5e9; S=0x2e5f9; @synthesize=_countryCode
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x2d775; 
@property(retain, nonatomic) NSString *country;	// G=0x2e5b5; S=0x2e5c5; @synthesize=_country
@property(readonly, assign, nonatomic) BOOL hasCountry;	// G=0x2d75d; 
// declared property setter: - (void)setDependentLocalitys:(id)localitys;	// 0x2e905
// declared property getter: - (id)dependentLocalitys;	// 0x2e8f5
// declared property setter: - (void)setOcean:(id)ocean;	// 0x2e8d1
// declared property getter: - (id)ocean;	// 0x2e8c1
// declared property setter: - (void)setInlandWater:(id)water;	// 0x2e89d
// declared property getter: - (id)inlandWater;	// 0x2e88d
// declared property setter: - (void)setAreaOfInterests:(id)interests;	// 0x2e869
// declared property getter: - (id)areaOfInterests;	// 0x2e859
// declared property setter: - (void)setPostCodeExtension:(id)extension;	// 0x2e835
// declared property getter: - (id)postCodeExtension;	// 0x2e825
// declared property setter: - (void)setFullThoroughfare:(id)thoroughfare;	// 0x2e801
// declared property getter: - (id)fullThoroughfare;	// 0x2e7f1
// declared property setter: - (void)setSubThoroughfare:(id)thoroughfare;	// 0x2e7cd
// declared property getter: - (id)subThoroughfare;	// 0x2e7bd
// declared property setter: - (void)setThoroughfare:(id)thoroughfare;	// 0x2e799
// declared property getter: - (id)thoroughfare;	// 0x2e789
// declared property setter: - (void)setPremises:(id)premises;	// 0x2e765
// declared property getter: - (id)premises;	// 0x2e755
// declared property setter: - (void)setSubLocality:(id)locality;	// 0x2e731
// declared property getter: - (id)subLocality;	// 0x2e721
// declared property setter: - (void)setPostCode:(id)code;	// 0x2e6fd
// declared property getter: - (id)postCode;	// 0x2e6ed
// declared property setter: - (void)setLocality:(id)locality;	// 0x2e6c9
// declared property getter: - (id)locality;	// 0x2e6b9
// declared property setter: - (void)setSubAdministrativeArea:(id)area;	// 0x2e695
// declared property getter: - (id)subAdministrativeArea;	// 0x2e685
// declared property setter: - (void)setAdministrativeAreaCode:(id)code;	// 0x2e661
// declared property getter: - (id)administrativeAreaCode;	// 0x2e651
// declared property setter: - (void)setAdministrativeArea:(id)area;	// 0x2e62d
// declared property getter: - (id)administrativeArea;	// 0x2e61d
// declared property setter: - (void)setCountryCode:(id)code;	// 0x2e5f9
// declared property getter: - (id)countryCode;	// 0x2e5e9
// declared property setter: - (void)setCountry:(id)country;	// 0x2e5c5
// declared property getter: - (id)country;	// 0x2e5b5
- (void)writeTo:(id)to;	// 0x2e229
- (BOOL)readFrom:(id)from;	// 0x2ded1
- (id)dictionaryRepresentation;	// 0x2db8d
- (id)description;	// 0x2db1d
- (void)setGeoIds:(long long *)ids count:(unsigned)count;	// 0x2db05
- (long long)geoIdAtIndex:(unsigned)index;	// 0x2da5d
- (void)addGeoId:(long long)anId;	// 0x2da45
- (void)clearGeoIds;	// 0x2da31
// declared property getter: - (long long *)geoIds;	// 0x2da21
// declared property getter: - (unsigned)geoIdsCount;	// 0x2da0d
- (id)dependentLocalityAtIndex:(unsigned)index;	// 0x2d9ed
- (unsigned)dependentLocalitysCount;	// 0x2d9cd
- (void)addDependentLocality:(id)locality;	// 0x2d969
// declared property getter: - (BOOL)hasOcean;	// 0x2d951
// declared property getter: - (BOOL)hasInlandWater;	// 0x2d939
- (id)areaOfInterestAtIndex:(unsigned)index;	// 0x2d919
- (unsigned)areaOfInterestsCount;	// 0x2d8f9
- (void)addAreaOfInterest:(id)interest;	// 0x2d895
// declared property getter: - (BOOL)hasPostCodeExtension;	// 0x2d87d
// declared property getter: - (BOOL)hasFullThoroughfare;	// 0x2d865
// declared property getter: - (BOOL)hasSubThoroughfare;	// 0x2d84d
// declared property getter: - (BOOL)hasThoroughfare;	// 0x2d835
// declared property getter: - (BOOL)hasPremises;	// 0x2d81d
// declared property getter: - (BOOL)hasSubLocality;	// 0x2d805
// declared property getter: - (BOOL)hasPostCode;	// 0x2d7ed
// declared property getter: - (BOOL)hasLocality;	// 0x2d7d5
// declared property getter: - (BOOL)hasSubAdministrativeArea;	// 0x2d7bd
// declared property getter: - (BOOL)hasAdministrativeAreaCode;	// 0x2d7a5
// declared property getter: - (BOOL)hasAdministrativeArea;	// 0x2d78d
// declared property getter: - (BOOL)hasCountryCode;	// 0x2d775
// declared property getter: - (BOOL)hasCountry;	// 0x2d75d
- (void)dealloc;	// 0x2d5c9
@end