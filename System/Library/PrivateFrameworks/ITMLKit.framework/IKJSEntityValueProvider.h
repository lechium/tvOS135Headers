/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSEntityValueProvider.h>

@protocol IKJSEntityValueProvider <JSExport>
@required
-(id)valueForEntityProperty:(id)arg1;
-(id)valuesForEntityProperties:(id)arg1;

@end


@protocol IKEntityValueProviding;
@interface IKJSEntityValueProvider : IKJSObject <IKJSEntityValueProvider> {

	id<IKEntityValueProviding> _entityValueProvider;

}

@property (nonatomic,retain) id<IKEntityValueProviding> entityValueProvider;              //@synthesize entityValueProvider=_entityValueProvider - In the implementation block
-(id)_valueForEntityProperty:(id)arg1 ;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
-(id<IKEntityValueProviding>)entityValueProvider;
-(void)setEntityValueProvider:(id<IKEntityValueProviding>)arg1 ;
@end

