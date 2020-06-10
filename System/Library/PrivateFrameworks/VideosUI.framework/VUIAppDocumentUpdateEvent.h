/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VUIAppDocumentUpdateEventDescriptor, NSDictionary;

@interface VUIAppDocumentUpdateEvent : NSObject <NSCopying> {

	VUIAppDocumentUpdateEventDescriptor* _descriptor;

}

@property (nonatomic,retain) VUIAppDocumentUpdateEventDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)settings;
+(id)entitlements;
+(id)restrictions;
+(id)purchases;
+(id)favorites;
+(id)preferredVideoFormat;
+(id)accountChanged;
+(id)utsk;
+(id)appDidBecomeActive;
+(id)playActivity;
+(id)removeFromPlayHistory;
+(id)playHistoryUpdated;
+(id)clearPlayHistory;
+(id)appRefresh;
+(id)locationAuthorizationChanged;
+(id)locationRetrieved;
+(id)iamMessageReceived;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSDictionary *)dictionaryRepresentation;
-(VUIAppDocumentUpdateEventDescriptor *)descriptor;
-(id)initWithDescriptor:(id)arg1 ;
-(void)setDescriptor:(VUIAppDocumentUpdateEventDescriptor *)arg1 ;
-(id)coalescedEvent:(id)arg1 ;
@end
