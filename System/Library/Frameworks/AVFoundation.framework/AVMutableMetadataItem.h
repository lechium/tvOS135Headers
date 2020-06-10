/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataItem.h>

@class AVMutableMetadataItemInternal, NSString, NSLocale, NSDictionary;

@interface AVMutableMetadataItem : AVMetadataItem {

	AVMutableMetadataItemInternal* _mutablePriv;

}

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (nonatomic,copy) NSLocale * locale; 
@property (assign,nonatomic) SCD_Struct_AV7 time; 
@property (assign,nonatomic) SCD_Struct_AV7 duration; 
@property (nonatomic,copy) NSString * dataType; 
@property (nonatomic,copy) id<NSObject><NSCopying> value; 
@property (nonatomic,copy) NSDictionary * extraAttributes; 
+(id)metadataItem;
+(id)keyPathsForValuesAffectingIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)key;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)languageCode;
-(NSString *)identifier;
-(id<NSObject><NSCopying>)value;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setKey:(id)arg1 ;
-(void)setValue:(id<NSObject><NSCopying>)arg1 ;
-(id)startDate;
-(SCD_Struct_AV7)duration;
-(SCD_Struct_AV7)time;
-(NSString *)dataType;
-(void)setDataType:(NSString *)arg1 ;
-(void)setDuration:(SCD_Struct_AV7)arg1 ;
-(void)setStartDate:(id)arg1 ;
-(void)setTime:(SCD_Struct_AV7)arg1 ;
-(id)keySpace;
-(NSString *)extendedLanguageTag;
-(NSDictionary *)extraAttributes;
-(void)setKeySpace:(id)arg1 ;
-(void)setExtraAttributes:(NSDictionary *)arg1 ;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
@end

