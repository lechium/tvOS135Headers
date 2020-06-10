/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface TVSBindingInfo : NSObject {

	id _observedObject;
	NSString* _observedKeyPath;
	NSDictionary* _bindingOptions;
	/*^block*/id _updateHandler;

}

@property (nonatomic,readonly) id observedObject;                               //@synthesize observedObject=_observedObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * observedKeyPath;                 //@synthesize observedKeyPath=_observedKeyPath - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * bindingOptions;              //@synthesize bindingOptions=_bindingOptions - In the implementation block
@property (nonatomic,copy,readonly) id updateHandler;                           //@synthesize updateHandler=_updateHandler - In the implementation block
-(id)description;
-(id)observedObject;
-(id)updateHandler;
-(NSString *)observedKeyPath;
-(id)initWithObservedObject:(id)arg1 observedKeyPath:(id)arg2 bindingOptions:(id)arg3 updateHandler:(/*^block*/id)arg4 ;
-(NSDictionary *)bindingOptions;
@end
