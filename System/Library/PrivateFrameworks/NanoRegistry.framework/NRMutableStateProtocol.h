/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NRMutableStateProtocol <NSObject,NSSecureCoding,NSCopying,NRMutableStateObserverProtocol,NRMutableStateParentProtocol>
@required
+(id)diffFrom:(id)arg1 to:(id)arg2;
-(id)applyDiff:(id)arg1;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4;

@end

