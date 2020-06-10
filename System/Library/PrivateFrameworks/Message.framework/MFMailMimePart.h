/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMimePart.h>

@interface MFMailMimePart : MFMimePart
+(Class)attachmentClass;
+(BOOL)isRecognizedClassForContent:(id)arg1 ;
-(id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)htmlContent;
-(id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2 ;
-(void)configureFileWrapper:(id)arg1 ;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5 ;
-(BOOL)_shouldContinueDecodingProcess;
-(id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)decodeTextRichtext;
-(id)decodeTextEnriched;
-(id)decodeTextHtml;
-(id)decodeTextPlain;
-(id)decodeTextCalendar;
-(id)decodeMultipartAppledouble;
-(id)decodeMessageDelivery_status;
-(id)decodeMessageRfc822;
-(id)decodeMessagePartial;
-(id)decodeMessageExternal_body;
@end

