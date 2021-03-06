/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject {

	MFLock* _attachmentsLock;
	NSMutableDictionary* _attachmentsByURL;

}
+(id)allSources;
+(id)_setOfAllSources;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)removeAttachmentForURL:(id)arg1 ;
-(id)attachmentForURL:(id)arg1 ;
-(BOOL)setAttachment:(id)arg1 forURL:(id)arg2 ;
@end

