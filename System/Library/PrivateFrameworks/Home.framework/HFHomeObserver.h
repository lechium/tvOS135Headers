/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFHomeObserver <HMHomeDelegatePrivate>
@optional
-(void)home:(id)arg1 willReadValuesForCharacteristics:(id)arg2;
-(void)home:(id)arg1 willWriteValuesForCharacteristics:(id)arg2;
-(void)home:(id)arg1 willExecuteActionSets:(id)arg2;
-(void)home:(id)arg1 didReadValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
-(void)home:(id)arg1 didWriteValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
-(void)home:(id)arg1 didExecuteActionSets:(id)arg2 failedActionSets:(id)arg3;
-(void)home:(id)arg1 didSelectRoom:(id)arg2;
-(void)homeDidUpdateWallpaper:(id)arg1;
-(void)home:(id)arg1 didUpdateWallpaperForRoom:(id)arg2;
-(void)home:(id)arg1 remoteAccessStateDidChange:(unsigned long long)arg2;

@end
