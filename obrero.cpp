#include "obrero.h"

Obrero::Obrero(QObject *parent)
    : QObject{parent}
{

}

Obrero::Obrero(const QString &nombre, int horas, TipoJornada jornada) : m_nombre(nombre),
    m_horas(horas),
    m_jornada(jornada)
{}

const QString &Obrero::nombre() const
{
    return m_nombre;
}

void Obrero::setNombre(const QString &newNombre)
{
    m_nombre = newNombre;
}

int Obrero::horas() const
{
    return m_horas;
}

void Obrero::setHoras(int newHoras)
{
    m_horas = newHoras;
}

TipoJornada Obrero::jornada() const
{
    return m_jornada;
}

void Obrero::setJornada(TipoJornada newJornada)
{
    m_jornada = newJornada;
}

double Obrero::salarioBruto() const
{
    return m_salarioBruto;
}

void Obrero::setSalarioBruto(double newSalarioBruto)
{
    m_salarioBruto = newSalarioBruto;
}

double Obrero::salarioNeto() const
{
    return m_salarioNeto;
}

void Obrero::setSalarioNeto(double newSalarioNeto)
{
    m_salarioNeto = newSalarioNeto;
}

double Obrero::descuento() const
{
    return m_descuento;
}

void Obrero::setDescuento(double newDescuento)
{
    m_descuento = newDescuento;
}

QString Obrero::toString()
{
    QString str="";
    str.append ("Nombre:"+m_nombre+"\n");
}
