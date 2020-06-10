/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IPAAutoSettings.h>
@class NSString;


@protocol IPAAutoSettings <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL pending; 
@required
-(NSString *)identifier;
-(BOOL)pending;
-(id)archiveDictionary;
-(BOOL)applyArchiveDictionary:(id)arg1;

@end


@class NSString;

@interface IPAAutoSettings : NSObject <IPAAutoSettings> {

	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL pending; 
+(id)pendingWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)pending;
-(id)archiveDictionary;
-(BOOL)_applyArchiveDictionary:(id)arg1 ;
-(BOOL)applyArchiveDictionary:(id)arg1 ;
-(void)_archiveIntoDictionary:(id)arg1 ;
-(BOOL)isEqualToAutoSettings:(id)arg1 ;
@end

