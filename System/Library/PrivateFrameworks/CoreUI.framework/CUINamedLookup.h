/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSString, CUIRenditionKey, CUIThemeRendition;

@interface CUINamedLookup : NSObject <NSLocking> {

	NSString* _name;
	CUIRenditionKey* _key;
	NSString* _signature;
	unsigned long long _storageRef;
	unsigned _distilledInVersion;
	os_unfair_lock_s _lock;
	unsigned _odContent : 1;

}

@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) CUIRenditionKey * key;                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned long long storageRef;                 //@synthesize storageRef=_storageRef - In the implementation block
@property (nonatomic,readonly) CUIThemeRendition * _rendition; 
@property (nonatomic,readonly) CUIRenditionKey * renditionKey; 
@property (nonatomic,readonly) NSString * renditionName; 
@property (nonatomic,readonly) NSString * keySignature; 
@property (nonatomic,readonly) BOOL _cacheRenditionProperties; 
@property (nonatomic,readonly) unsigned _distilledInVersion; 
@property (nonatomic,readonly) unsigned long long subtype; 
@property (nonatomic,readonly) long long sizeClassHorizontal; 
@property (nonatomic,readonly) long long sizeClassVertical; 
@property (nonatomic,readonly) long long memoryClass; 
@property (nonatomic,readonly) long long graphicsClass; 
@property (nonatomic,readonly) long long appearanceIdentifier; 
@property (nonatomic,readonly) BOOL representsOnDemandContent; 
@property (nonatomic,readonly) long long idiom; 
@property (nonatomic,readonly) long long displayGamut; 
@property (nonatomic,readonly) long long layoutDirection; 
@property (nonatomic,readonly) NSString * appearance; 
-(id)configuration;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(CUIRenditionKey *)key;
-(void)lock;
-(void)unlock;
-(void)setName:(NSString *)arg1 ;
-(void)setKey:(CUIRenditionKey *)arg1 ;
-(unsigned long long)subtype;
-(NSString *)keySignature;
-(long long)idiom;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(CUIThemeRendition *)_rendition;
-(long long)layoutDirection;
-(long long)appearanceIdentifier;
-(CUIRenditionKey *)renditionKey;
-(unsigned)_distilledInVersion;
-(BOOL)isTintable;
-(void)setStorageRef:(unsigned long long)arg1 ;
-(unsigned long long)storageRef;
-(NSString *)appearance;
-(long long)displayGamut;
-(long long)sizeClassHorizontal;
-(long long)sizeClassVertical;
-(id)_renditionForSpecificKey:(id)arg1 ;
-(BOOL)_cacheRenditionProperties;
-(NSString *)renditionName;
-(BOOL)representsOnDemandContent;
-(void)setRepresentsOnDemandContent:(BOOL)arg1 ;
-(long long)memoryClass;
-(long long)graphicsClass;
@end

