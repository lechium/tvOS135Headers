/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSFileHandle;


@protocol ASTDownloadConnection <ASTConnection>
@property (nonatomic,copy) id didDownloadFile; 
@property (nonatomic,readonly) NSFileHandle * destinationFileHandle; 
@required
-(id)didDownloadFile;
-(void)setDidDownloadFile:(/*^block*/id)arg1;
-(NSFileHandle *)destinationFileHandle;

@end

