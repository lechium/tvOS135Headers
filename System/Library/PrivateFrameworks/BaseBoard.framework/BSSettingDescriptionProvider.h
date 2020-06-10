/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSSettingDescriptionProvider <NSObject>
@optional
-(id)keyDescriptionForSetting:(unsigned long long)arg1;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
-(BOOL)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5;
-(id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
-(id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
-(BOOL)appendDescriptionToBuilder:(id)arg1 forFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;

@end

