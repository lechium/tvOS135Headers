/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ExportDelegate <NSObject>
@optional
-(void)didFinishExport;
-(BOOL)didFinishTestModeExport;
-(void)exportController:(id)arg1 progressedTo:(float)arg2 preventBackslide:(BOOL)arg3;
-(void)exportControllerWillStartCopyToCameraRoll:(id)arg1;
-(void)autoExportAlertCompleted;

@end

