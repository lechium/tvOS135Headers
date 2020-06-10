/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPIdentifierSet, NSMutableDictionary, NSString;

@interface MPModelObject : NSObject <_MPStateDumpPropertyListTransformable, NSCopying, NSSecureCoding> {

	MPIdentifierSet* _originalIdentifierSet;
	NSMutableDictionary* _storage;
	BOOL _isFinalized;
	MPIdentifierSet* _identifiers;

}

@property (nonatomic,readonly) MPLibraryAddStatusObserverConfiguration libraryAddStatusObserverConfiguration; 
@property (nonatomic,readonly) long long libraryRemovalSupportedOptions; 
@property (nonatomic,readonly) MPIdentifierSet * originalIdentifierSet; 
@property (nonatomic,readonly) NSString * humanDescription; 
@property (nonatomic,copy,readonly) MPIdentifierSet * identifiers;                                                         //@synthesize identifiers=_identifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)classesForSecureCoding;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredLibraryAddStatusObservationProperties;
+(void)performWithoutEnforcement:(/*^block*/id)arg1 ;
+(void)_indexProperties;
+(BOOL)_lookupPropertyForSelector:(SEL)arg1 result:(/*^block*/id)arg2 ;
+(id)_modelKeyForPropertySelector:(SEL)arg1 ;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
+(id)requiredKeepLocalStatusObservationProperties;
+(BOOL)supportsKeepLocalStatusObservation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(MPIdentifierSet *)identifiers;
-(NSString *)humanDescription;
-(id)_stateDumpObject;
-(id)contentItemCollectionInfo;
-(id)mediaItemPropertyValues;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(void)setValue:(id)arg1 forModelKey:(id)arg2 ;
-(id)valueForModelKey:(id)arg1 ;
-(id)initWithIdentifiers:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)copyWithIdentifiers:(id)arg1 block:(/*^block*/id)arg2 ;
-(MPIdentifierSet *)originalIdentifierSet;
-(BOOL)hasLoadedValueForKey:(id)arg1 ;
-(BOOL)hasLoadedValuesForPropertySet:(id)arg1 ;
-(BOOL)_isModelKey:(id)arg1 ;
-(long long)libraryRemovalSupportedOptions;
-(id)newKeepLocalStatusObserverConfiguration;
@end

