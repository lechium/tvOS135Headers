/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSDate;

@interface MBContainer : NSObject <NSCopying> {

	NSMutableDictionary* _plist;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) int containerType; 
@property (nonatomic,readonly) NSString * containerTypeString; 
@property (nonatomic,retain) NSString * containerDir; 
@property (nonatomic,readonly) NSString * safeHarborDir; 
@property (nonatomic,retain) NSDate * datePlacedInSafeHarbor; 
@property (nonatomic,readonly) BOOL isSystemContainer; 
@property (nonatomic,readonly) BOOL isSystemSharedContainer; 
@property (getter=isSafeHarbor,nonatomic,readonly) BOOL safeHarbor; 
+(id)containerWithPropertyList:(id)arg1 ;
+(id)containerWithDomainName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)domain;
-(NSString *)identifier;
-(id)initWithPropertyList:(id)arg1 ;
-(int)containerType;
-(BOOL)isSystemContainer;
-(BOOL)isSystemSharedContainer;
-(id)propertyListForBackupProperties;
-(NSString *)containerDir;
-(BOOL)isSafeHarbor;
-(NSDate *)datePlacedInSafeHarbor;
-(NSString *)safeHarborDir;
-(NSString *)containerTypeString;
-(void)setContainerDir:(NSString *)arg1 ;
-(void)setDatePlacedInSafeHarbor:(NSDate *)arg1 ;
-(id)propertyListForSafeHarborInfo;
@end

