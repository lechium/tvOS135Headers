/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@class NSData;

@interface CNSyncImageResult : NSObject {

	unsigned long long _type;
	NSData* _imageData;
	NSData* _imageHash;
	CGRect _cropRect;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                   //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                      //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) NSData * imageHash;                   //@synthesize imageHash=_imageHash - In the implementation block
-(unsigned long long)type;
-(NSData *)imageData;
-(CGRect)cropRect;
-(NSData *)imageHash;
-(id)initWithType:(unsigned long long)arg1 imageData:(id)arg2 cropRect:(CGRect)arg3 imageHash:(id)arg4 ;
@end

