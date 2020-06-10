/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NSItemProviderTypeCoercion : NSObject {

	id _value;
	Class _targetClass;

}

@property (retain) id value;                     //@synthesize value=_value - In the implementation block
@property (copy) Class targetClass;              //@synthesize targetClass=_targetClass - In the implementation block
+(id)typeCoercionForValue:(id)arg1 targetClass:(Class)arg2 ;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)coerceValueError:(id*)arg1 ;
-(BOOL)shouldCoerceForCoding;
-(void)setTargetClass:(Class)arg1 ;
-(Class)targetClass;
-(id)_NSItemProviderTypeCoercion_coercedNSDataValueFromNSURLValue:(id)arg1 error:(id*)arg2 ;
-(id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSURLValue:(id)arg1 error:(id*)arg2 ;
-(id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSDataValue:(id)arg1 error:(id*)arg2 ;
@end

